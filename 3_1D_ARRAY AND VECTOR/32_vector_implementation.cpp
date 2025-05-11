#include <iostream>
#include <vector>
using namespace std;
int main()
{   
    // Vector initilization
    vector<int> v;
    // Push Operation
    v.push_back(10);
    v.push_back(11);
    v.push_back(23);
    v.push_back(78);
    v.push_back(33);
    // Vector Array Printing
    for (int i = 0; i != v.size(); i++)
    {
        cout << v[i] << " ";
    }

    // Size and capacity of Array

    cout << endl;
    cout << "\nSize of V:" << v.size() << endl;
    cout << "capcity of V:" << v.capacity() << endl;

    // Pop Operation

    v.pop_back();
    v.pop_back();
    for (int i = 0; i != v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\nSize of V:" << v.size() << endl;
    cout << "capcity of V:" << v.capacity() << endl;

    // Dynamic Array Size allocation

    int n;
    cout << "\nEnter the Size of Vector Array:\n";
    cin >> n;
    vector<int> v2(n);
    for (int i = 0; i != v2.size(); i++)
    {
        cout << "Enter " << i << " Element of Array:";
        cin >> v2[i];
    }
    cout << endl;
    for (int j = 0; j != v2.size(); j++)
    {
        cout << v2[j] << " ";
    }

    // Erasing the element at any index 

    cout << "\nAFTER ERASING\n";
    v2.erase(v2.begin() + 1);
    cout << endl;

    for (int j = 0; j != v2.size(); j++)
    {
        cout << v2[j] << " ";
    }

    // Inserting the element at any index

    cout << "\nAfter Inserting At a index\n";
    v2.insert(v2.begin() + 2, 294);
    cout << endl;
    for (int j = 0; j != v2.size(); j++)
    {
        cout << v2[j] << " ";
    }

    // Front Back and Empty opeation
    cout<<"\nFRONT BACK AND EMPTY \n";
    vector<int>v3 = {2,3,4,5};
    for(int i = 0;i != v3.size() ;i++){
        cout<<v[i]<<" ";
    }
    
    cout<<"FRONT: "<<v3.front()<<endl;
    cout<<"BACK: "<<v3.back()<<endl;
    cout<<"EMPTY: "<<v3.empty()<<endl;
    cout<<"AT: "<<v3.at(2)<<endl;


    
    

    return 0;
}