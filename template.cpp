#include<iostream>
using namespace std;
template<class T>
class vector
{
    public:
    T *arr;
    int size;
    public:
    vector(int m)
    {
        size=m;
      //  this->size=size;
        arr=new T[size];
    }
    T dotproduct(vector &v)
    {
T d=0;
for(int i=0;i<size  ;i++)
{
    d=d+this->arr[i] *v.arr[i];
}
return d;
    }
};
int main()
{
vector<int> intv(3);
intv.arr[0]=2;
intv.arr[1]=4;
intv.arr[2]=6;
vector<float>fv(3);
fv.arr[0]=2.5;
fv.arr[1]=4.5;
fv.arr[2]=6.5;
float a=intv.dotproduct(fv);
cout<<a<<endl;
return 0;

}