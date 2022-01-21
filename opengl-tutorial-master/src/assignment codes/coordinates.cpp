#include <bits/stdc++.h>
#include <cmath>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef set<int> si;
typedef set<ll> sl;
#define endl "\n"
#define all(s) s.begin(), s.end()
#define pop pop_back
#define pb push_back
#define MOD 1000000007
#define inf 1000000000
#define mkp make_pair
#define tr(c, i) for (typeof c.begin() i = c.begin(); i != c.end(); i++)
#define present(c, x) (c.find(x) != c.end())
#define cpresent(c, x) (find(allc, x) != c.end())

#define sz(a) int((a).size())

#define flugel cin.tie(0)->sync_with_stdio(0)

void coordinates(int n)
{
    // ---------------------------------------------------
    // for the indices matrix
    float *indices = (float *)malloc(12 * n * sizeof(float));
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        indices[count++] = i;
        indices[count++] = i + 1;
        indices[count++] = i + n - 1;

        // -----------second triangle
        indices[count++] = i;
        indices[count++] = i + n;
        indices[count++] = i + n - 1;
    }

    for (int i = 0; i < n - 2; i++)
    {
        indices[count++] = i;
        indices[count++] = i + 1;
        indices[count++] = n - 1;
        indices[count++] = i;
        indices[count++] = i + 1;
        indices[count++] = n - 1;
    }

    // -----------------------------------------------------

    float x = 2 * 3.14159 / (float)n;

    // float* vertices = (float*) malloc(12*sizeof(float));
    float *vertices = (float *)malloc((6 * n + 2) * sizeof(float));
    int i = 0;
    for (float angle = 0; angle < 2 * 3.14159; angle += x)
    {
        vertices[i++] = sin(angle);
        vertices[i++] = cos(angle);
        vertices[i++] = 1.0;
        // vertices[i++] = rand() / RAND_MAX;
        // vertices[i++] = rand() / RAND_MAX;
        // vertices[i++] = rand() / RAND_MAX;
    }
    for (float angle = 0; angle < 2 * 3.14159; angle += x)
    {
        vertices[i++] = sin(angle);
        vertices[i++] = cos(angle);
        vertices[i++] = -1.0;
        // vertices[i++] = rand() / RAND_MAX;
        // vertices[i++] = rand() / RAND_MAX;
        // vertices[i++] = rand() / RAND_MAX;
    }
    vertices[i++] = 0;
    vertices[i++] = 0;
    vertices[i++] = -1.0;
    vertices[i++] = 0;
    vertices[i++] = 0;
    vertices[i++] = 1.0;
    //  function for the printing the array at an interval of 6
    for (int i = 0; i < 6 * n;)
    // for (int i = 0; i < 12*n; )
    {
        // cout<<vertices[i++]<<" "<<vertices[i++]<<" "<<vertices[i++]<<" "<<vertices[i++]<<" "<<vertices[i++]<<" "<<vertices[i++]<<"\n";
        cout << vertices[i++] << " " << vertices[i++] << " " << vertices[i++] << "\n";
    }
    // deallocating the memory
    free(vertices);
    free(indices);
}

int main()
{
    flugel;
    //  Enter the value of n for the prism
    int n;
    cin >> n;
    coordinates(n);

    return 0;
}