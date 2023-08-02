#include <iostream>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;
int main(int argc, char *argv[])
{
    //使用opencv去读取摄像头数据，并且显示在窗口中
       //视频本身也是一张张图片，帧的概念  每秒不断的切换/播放 图片
       Mat frame;//保存每一帧的摄像头图片对象   一直/重复/有规律去XXXX   循环
       Mat blurImg;//模糊图片
       VideoCapture capture(0);//当参数为0的时候 表示打开电脑的默认摄像头  capture("d:/test.mp4");播放制定目录下的视频

       while(capture.read(frame))
       {
           imshow("video",frame);
//           blur(frame,blurImg,Size(50,50));//模糊处理方法
//           imshow("blur",blurImg);


           waitKey(30);
       }


    return 0;
}
