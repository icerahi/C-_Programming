#include <iostream>
#include <string>

template <typename T>
void swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;

    // std::cout << "a: " << a << "\t b: " << b << std::endl;
}

template<typename T>
void swap(T a[], T b[],int size){
    for(int i=0;i<size;i++){
        T temp=a[i];
        a[i]=b[i];
        b[i]=temp;
    }
}


// void swap(int x, int y){}

/* void swap(std::string &a, std::string &b){
    std::string temp=a;
    a=b;
    b=temp;
} */

int main()
{
    int a = 10;
    int b = 20;
    swap(a, b);
    // std::cout << "a: " << a << "\t b:" << b << std::endl;

    std::string first_name = "Imran";
    std::string last_name = "Hasan";

    swap(first_name, last_name);
    // std::cout << "firstname:" << first_name << "\t last name: " << last_name << std::endl;

    int nines[]={9,9,9,9,9};
    int ones[]={1,1,1,1,1};

    // std::string nines[]={"nine","nine","nine","nine","nine"};
    // std::string ones[]={"one","one","one","one","one"};
    

    for (int i=0;i<sizeof(nines)/sizeof(nines[i]);i++){
        std::cout << nines[i]<<" "<< ones[i]<< "\t";
    }

    std::cout<<std::endl;
    swap(nines,ones,5);
    for (int i=0;i<sizeof(nines)/sizeof(nines[i]);i++){
        std::cout << nines[i]<<" "<< ones[i]<< "\t";
    }
}