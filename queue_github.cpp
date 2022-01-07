#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class queue
{
  int fornt;
  int rear;
  int capacity;
  int *arr;
  public:
  void creat(int c)
  {
  rear=-1;
  fornt=0;
  capacity=c;
  arr= new int[capacity];
  }
  void enqueue(int data)
  {
   rear++;
   arr[rear]=data;
  }
  void dequeue()
  {
   fornt++;
  }
  void display()
{
  for(int i=fornt;i<=rear;i++)
 {
  cout<<" "<<arr[i];
 }
  getch();
}
};
int main()
{
 queue q1;
 int c,data,cmd;
 while(1)
{
 clrscr();
 cerr<<"===================================="<<endl;
 cout<<"[----{ ~queue data structure~ }----]"<<endl;
 clog<<"===================================="<<endl;
 clog<<"+----------------------------------+"<<endl;
 cout<<"|1.creat the queue                 |"<<endl;
 cout<<"+----------------------------------+"<<endl;
 cout<<"|2.insert the data                 |"<<endl;
 cout<<"+----------------------------------+"<<endl;
 cout<<"|3.remove the data                 |"<<endl;
 cout<<"+----------------------------------+"<<endl;
 cout<<"|4.display                         |"<<endl;
 cout<<"+----------------------------------+"<<endl;
 cout<<"|5.exit                            |"<<endl;
 cout<<"+----------------------------------+"<<endl;
 cerr<<"enter the command=>>> ";
 cin>>cmd;
 switch(cmd)
 {
  case 1:
  cout<<"enter the capacity=>"<<endl;
  cin>>c;
  q1.creat(c);
  break;
  case 2:
  cout<<"enter the data=>"<<endl;
  cin>>data;
  q1.enqueue(data);
  break;
  case 3:
  q1.dequeue();
  break;
  case 4:
  q1.display();
  break;
  case 5:
  return 0;
  break;
  default:
  cout<<"command is not found"<<endl;
  break;
 }
  getch();
}
 return 0;
}