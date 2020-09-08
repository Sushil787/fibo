#include<iostream>
int fibo(int x);
int main(){

int x;
std::cout<<"input the no of series you want"<<std::endl;
std::cin>>x;
std::cout<<"the series is"<<fibo(x);
return 0;

}
int fibo(int x){

 int a = 0;
 int b = 1;
 int c;
 int i =1;
 std::cout<<"\n"<<b;
 while(i<=x){

  c = a+b;
  std::cout<<std::endl<<c;
  a = b;
  b = c;


  i++;

 }
}
