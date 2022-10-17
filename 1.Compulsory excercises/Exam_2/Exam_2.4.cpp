#include <bits/stdc++.h>
using namespace std;

int Largest_Area_Hist(int hist[], int noh)
{
    stack<int> index; // store index (whose value is increasing)
    int max_area = 0;
    int t_idx;
    int temp_area; // area while drop the top
    int i = 0;
    while (i < noh)
    {
        if (index.empty() || hist[index.top()] <= hist[i]) // stack empty or the current bar is higher than the top
            index.push(i++);                               // push index to stack
        else                                               // if current bar is lower
        {
            t_idx = index.top(); // store the top index before pop it
            index.pop();         // pop the top
            temp_area = hist[t_idx] * (index.empty() ? i : i - index.top() - 1);
            if (max_area < temp_area)
                max_area = temp_area; // update new max area if needed
        }
    }
    while (index.empty() == false) // calculate highest area created by the remaining bars
    {
        t_idx = index.top();
        index.pop();
        temp_area = hist[t_idx] * (index.empty() ? i : i - index.top() - 1);

        if (max_area < temp_area)
            max_area = temp_area;
    }
    return max_area;
}

void StrtoArr(string str, int arr[], int *n)
{
    for (int i = 0; i < 100; i++)
        arr[i] = 0;
    int j = 0;
    for (char c : str)
    {
        if (isdigit(c))
            arr[j] = arr[j] * 10 + (c - 48);
        else
            j++;
    }
    *n = arr[0];
}

int main()
{
    ifstream inFile;
    string line;
    inFile.open("file.txt");
    ofstream area;
    area.open("area.txt");
    while (getline(inFile, line))
    {
        int arr[100], n;
        StrtoArr(line, arr, &n);
        int hist[n];
        for (int i = 1; i <= n; i++)
            hist[i - 1] = arr[i];
        area << Largest_Area_Hist(hist, n) << endl;
    }
    inFile.close();
    area.close();
    return 0;
}