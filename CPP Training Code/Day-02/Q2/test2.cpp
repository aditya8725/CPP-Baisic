#include<iostream>

//default value arguments
void sum(int a,int b=0,int c=0)
{
    std::cout<<a+b+c<<std::endl;
}

// class point
// {
//     public:
//     int x,y;
//     protected:
//     point(int p,int q)
//     {
//         x=p;
//         y=q;
//     }
// };

int main()
{
    sum(10);
    sum(1,2);
    sum(10,20,30);

    return 0;


}