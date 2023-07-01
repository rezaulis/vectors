#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> list{1,4,2,7,8,4,5,32,7,4,2,9,3,6,7,8};
    int x;
    cout << "Enter a number: ";
    cin >> x;
    int y = 0;
    for(int i = 0; i < list.size(); i++){
        if(x == list[i]){
            y++;
        }
    }
    cout<< "The number " << x << " showes " << y << " times in the vector.";

    return 0;
}


