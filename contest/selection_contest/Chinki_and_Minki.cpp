#include <iostream>
#include <vector>

using namespace std;

void generateSubsets(vector<int> &a, int index, vector<int> &current,int sum, vector<int> &subsets)
{
    if (index == a.size())
    {
        if(current.size()==a.size()/2)
           subsets.push_back(sum);
        return;
    }

    // Exclude the current element
    generateSubsets(a, index + 1, current,sum ,subsets);

    // Include the current element
    current.push_back(a[index]);
    sum+=a[index];
    generateSubsets(a, index + 1, current,sum, subsets);

    // Backtrack
    current.pop_back();
}

void printAllSubsets(vector<int> &subsets)
{
    for (auto num : subsets)
    {
    
            cout << num << " ";
        
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> subsets;
    vector<int> current;
    int sum=0;
    generateSubsets(a, 0, current,sum ,subsets);

    cout << "All subsets of the array:" << endl;
    printAllSubsets(subsets);

    return 0;
}
