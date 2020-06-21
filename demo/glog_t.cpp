//
//compile:g++ -o glog_t glog_t.cpp -lglog
//
#include<glog/logging.h>

int main(int argc,char **argv)
{
    google::InitGoogleLogging(argv[0]);
    FLAGS_log_dir="./";
    LOG(ERROR)<<"This is glog test file";
    return 0;
}
