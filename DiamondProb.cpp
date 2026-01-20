#include<string>
#include<iostream>
class Stream{
        std::string m_filename;
    public:
        Stream(const std::string &filename):m_filename(filename){
            std::cout<<"InSide Stream::Stream"<<std::endl;
        }
        const std::string& GetFileName() const{
            return m_filename;
        }
        ~Stream(){
            std::cout<<"InSide Stream::~Stream\n";
        }
};
class OutputStream : virtual public Stream{
        std::ostream &out;
    public:
        OutputStream(std::ostream &o,const std::string& filename):out(o),Stream(filename){
            std::cout<<"InSide OutputStream::OutputStream\n";
        }
        std::ostream& operator <<(const std::string &data){
            out<<data;
            return out;
        }
        ~OutputStream(){
            std::cout<<"InSide OutputStream::~OutputStream\n";
        }

};
class InputStream : virtual public Stream{
        std::istream &in;
    public:
        InputStream(std::istream &o,const std::string &filename):in(o),Stream(filename){
            std::cout<<"InSide InputStream::InputStream\n";
        }
        std::istream& operator >>(std::string &data){
            in>>data;
            return in;
        }
        ~InputStream(){
            std::cout<<"InSide InputStream::~InputStream\n";
        }
};
class IOSteram : public InputStream,public OutputStream{
    public:
        IOSteram(const std::string &filename):OutputStream(std::cout,filename),
        InputStream(std::cin,filename),Stream(filename)
        {
            std::cout<<"InSide IOSteram::IOSteram"<<std::endl;
        }
        ~IOSteram(){
            std::cout<<"InSide IOSteram::~IOSteram\n";
        }

};

int main()
{
    std::cout<<"Inside Main!\n";
    IOSteram io("MyFileName.txt");
    std::cout<<"FileName : "<<io.GetFileName()<<std::endl;
    std::string data;
    std::cin >> data;
    std::cout<< data;
    std::cout<<std::endl;
    //std::cout<<"Size of IOStream Class : "<<sizeof(io)<<std::endl;
    //std::cout<<"Size of std::string : "<<sizeof(std::string)<<std::endl;
    return 0;
}