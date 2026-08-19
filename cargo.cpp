#include <iostream>
using namespace std;

int main()
{
    int capacity;
    int conNo;
    cout << "Enter Capacity: ";
    cin >> capacity;
    cout << "Enter no. of containers: ";
    cin >> conNo;
    cout << "Pls go on entering the weight of each container: \n";
    int i = 0;
    double wSum = 0;
    int j, k, t1, t2;
    j = 0; bool mark;
    double conW[conNo];
    while (i < conNo)
    {
        cin >> k;
        wSum += k;
        // t2 = k;
        mark = false;
        while(j <= i)
        {
            if(k <= conW[j]){
                t1 = conW[j];
                conW[j] = k;
                k = t1;
                mark = true;
            }
            j++;
            
        }
        
        conW[i] = k;
        
        j=0;
        i++;
    }
    double avg = wSum/conNo;
    cout << "Total Shipment Weight: " << wSum << endl;
    cout << "Average Container Weight: " << avg << endl;
    cout << "Heaviest Container: " << conW[conNo - 1] << endl;
    cout << "Lightest Container: " << conW[0] << endl;
    if (wSum >= 200) {
        cout << "Classification: Heavy\n";
    } else if (wSum < 200){
        cout << "Classification: Light\n";
    }
    cout << "Port Capacity: " << capacity << endl;
    if(wSum <= capacity){
        cout << "Status: Shipment can be unloaded\n";
    } else {
        cout << "Status: Shipment exceeds port capacity\n";
    }
    //cout << *conW;
    for(int y = 0; y < conNo; y++){
        cout << conW[y] << endl;
    }
    return 0;
}