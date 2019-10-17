#include <iostream>
#include <string>

using namespace std;

string substring(string test, int index, int length);
int x(string dna, string protein);

int main()
{
    string s = "ATGCAGAAAGCTACGATCAATGATCGATCAATGGAT";
    string test = "AATG";
    int index = 0;
    int length = 4;
    cout<<substring(s,index,length)<<endl;
    cout << x(s, test) << endl;
}

string substring(string test, int index, int length)
{
    string m = "";
    for(int i = index; i < ( length+index ); i++)
    {
        m = m + test[i];
    }
    return m;
}

int x(string dna, string protein )
{
    int y = 0;
    bool m = false;
    for(int j = 0; (j < dna.length()) && (m == false); j++)
    {
        if(protein == substring(dna, j, protein.length()))
        {
            y = j;
            m = true;
        }
    }
    return y;
}

string encrypt(string in, int shift)
{

}
