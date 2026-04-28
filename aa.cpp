// // // //
// // // // Created by KEC on 2026/4/14.
// // // //
// // //
// // // #include <iostream>
// // // using namespace std;
// // // void test1()
// // // {
// // //     cout<<"hello world\n";
// // // }
// // // void test2(double a)
// // // {
// // //     cout<<"hello orld Number"<<a<<endl ;
// // // }
// // // int test3()
// // // {
// // //     cout<<"helo wor";
// // //     return 18980;
// // //
// // // }
// // // int test4(int c)
// // // {
// // //     cout<<"hello wod";
// // //     return c;
// // // }
// // // int main()
// // // {
// // //     // for (int i=0;i>-1;i++)
// // //     // {
// // //     //     cout<<i;
// // //     // }
// // //     test1();
// // //     test2(31514.42474);
// // //     int num=test3();
// // //     cout<<num<<endl;
// // //     test4(9765);
// // //
// // // }
// // //
// // #include <iostream>
// //
// // using namespace std;
// //
// // class A
// //
// // {
// //
// //     int a,b;
// //
// // public:
// //
// //     A(){ }
// //
// //     A(int i,int j):a(i),b(j)
// //
// //     {
// //
// //         cout<<"constructor\n";
// //
// //     }
// //
// //     ~A()
// //
// //     {
// //
// //         cout<<a<<"destructor\n";
// //
// //     }
// //
// // };
// //
// // int main()
// //
// // {
// //
// //     A ob2(2,5);
// //
// //     A ob1(ob2);
// //
// //     return  0;
// //
// // }
//
// #include<iostream>
//
// using namespace std;
//
// class example
//
// {
//
// public:
//
//     example(int n)
//
//     {
//
//         i=n;
//
//         cout<<"Constructing\n";
//
//     }
//
//     ~example()
//
//     {
//
//         cout<<"Destructing\n";
//
//     }
//
//     int get_i()
//
//     {
//
//         return i;
//
//     }
//
// private:
//
//     int i;
//
// };
//
//
//
// int sqr_it(example o)
//
// {
//
//     return o.get_i()* o.get_i();
//
// }
//
//
//
// int main()
//
// {
//
//     example x(10);
//
//     cout<<x.get_i()<<endl;
//
//     cout<<sqr_it(x)<<endl;
//
//     return 0;
//
// }


#include <iostream>

using namespace std;

class cube

{

public:

    cube(int ht=2,int wd=5,int dp=3)

    {

        height=ht;

        width=wd;

        depth=dp;

        cout<<"depth="<<depth<<"construncted called"<<endl;

    }

    ~cube()

    {

        cout<<"depth="<<depth<<"Destructed called"<<endl;

    }

    int volume()

    {

        return height *width*depth;

    }

private:

    int height,width,depth;

};

int main()

{

    cube cone(10,20,15), ctwo;

    cout<<cone.volume()<<endl;

    cout<<ctwo.volume()<<endl;

    return  0;

}

