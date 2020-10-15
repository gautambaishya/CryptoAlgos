#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

void swap(char &a, char &b)
{
    char temp = a;
    a = b;
    b = temp;
}

bool next_permute(string &str)
{
    //find the longest non-increasing suffix
    int i = str.length() - 1;
    while(i > 0)
    {
        if(str[i-1] < str[i])
        {
            break;
        }

        i--;
    }

    //no more permutations possible
    if(i==0)
        return false;


    int pivot = i-1;

    //find rightmost  element that exceeds the pivot
    int j = str.length() - 1;
    while(j > pivot)
    {
        if(str[j] > str[pivot])
        {
            break;
        }

        j--;
    }

    if (j == pivot)
        return false;

    //make str[j] the pivot
    swap(str[pivot], str[j]);

    //Reverse the suffix
    j =  str.length() - 1;
    while(i < j)
    {
        swap(str[i++], str[j--]);
    }
    return true;
}

void generate_all_permutations(string &str)
{
    //sort the string for the next_permute function to work
    sort(str.begin(), str.end());


    while(next_permute(str))
    {
        cout << str << "\n";
    }
}

int main()
{
    string word = "abcdefghijklmnopqrstuvwxyz";
    cout << word << "\n";
    string str = word;
    generate_all_permutations(str);
}

