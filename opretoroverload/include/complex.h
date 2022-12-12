#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>
using namespace std;

class complex
{
    int Real;
    int Img;
    static int numberOfobject;
    public:
        int *valuse;
        complex()
        {
            Real=Img=0;
            valuse=new int[20];
            numberOfobject++;
        }
complex(int Real,int Img)

{
this->Real=Real;
this->Img=Img;
valuse=new int[20];
numberOfobject++;
}
void display()
{
    cout<<Real<<" + "<<Img <<"i"<<"\n";
}
complex Add(complex x)
{
    complex c;
    c.Real=this->Real+x.Real;
    c.Img=this->Img+x.Img;
    return c;
}
 complex operator+(complex x)
 {
     complex result;
     result.Real=this->Real+x.Real;
     result.Img=this->Img+x.Img;
     return result;
 }
  complex operator-(complex x)
  {
        complex result;
        if(this->Real> x.Real)
        {
     result.Real=this->Real-x.Real;
     result.Img=this->Img+-x.Img;
     }
     else
     {
     result.Real=x.Real-this->Real;
     result.Img=x.Img-this->Img;
     }
     return result;
  }

   complex operator+(int x)
 {
     complex result;
     result.Real=this->Real+x;
     result.Img=this->Img;
     return result;
 }
   friend complex operator+(int num,complex c);
complex operator++()
{

    this->Real++;
    this->Img++;
    return *this;
}
complex operator++(int n)
{
  complex r=*this;
    this->Real++;
    this->Img++;
    return r;
}

  operator int()
  {
      return this->Real;
  }

   complex operator=(complex x)
   {
       this->Real=x.Real;
       this->Img=x.Img;

       for(int i=0;i<20;i++)
       {
           this->valuse[i]=x.valuse[i];
       }
   }
  static complex Add(complex x,complex y)
   {
       complex result;
       result.Real=x.Real+y.Real;
       result.Img=x.Img+y.Img;
       return result;
   }
   static void numbeOfObjec()
   {
       cout<<"the number of object is = "<<numberOfobject<<"\n";
   }
    protected:

    private:
};
int complex::numberOfobject=0;
complex operator+(int num,complex c)
{
    complex result;
     result.Real=c.Real+num;
     result.Img=c.Img;
     return result;
}

#endif // COMPLEX_H
