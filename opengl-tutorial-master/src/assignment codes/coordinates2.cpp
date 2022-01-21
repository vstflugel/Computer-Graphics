// TITLE: coordinates2.cpp
// AUTHOR: Vaibhav Singh Tomar
// DATE: 17-01-2022
// TIME: 07:20:24

#include <bits/stdc++.h>
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

int main()
{
    flugel;

    int n;
    cin >> n;



// ------------------------ all the rectangular faced triangle-----------------
 
for (int j = 0; j < n; j++)
{

    float r = (float)rand() / (float)RAND_MAX;
    float g = (float)rand() / (float)RAND_MAX;
    float b = (float)rand() / (float)RAND_MAX;

    // 1st coordinate of triangle 1
    vertices[i++] = sin(angle);
    vertices[i++] = cos(angle);
    vertices[i++] = 0.5f;
    vertices[i++] = r;
    vertices[i++] = g;
    vertices[i++] = b;

    // 2nd coordinate of triangle 1
    vertices[i++] = sin(angle);
    vertices[i++] = cos(angle);
    vertices[i++] = -0.5f;
    vertices[i++] = r;
    vertices[i++] = g;
    vertices[i++] = b;

    // 3nd coordinate of triangle 1
    vertices[i++] = sin(angle + theta);
    vertices[i++] = cos(angle + theta);
    vertices[i++] = -0.5f;
    vertices[i++] = r;
    vertices[i++] = g;
    vertices[i++] = b;

        // 1st coordinate of triangle 2
    vertices[i++] = sin(angle);
    vertices[i++] = cos(angle);
    vertices[i++] = 0.5f;
    vertices[i++] = r;
    vertices[i++] = g;
    vertices[i++] = b;

    // 2nd coordinate of triangle 2
    vertices[i++] = sin(angle + theta);
    vertices[i++] = cos(angle + theta);
    vertices[i++] = 0.5f;
    vertices[i++] = r;
    vertices[i++] = g;
    vertices[i++] = b;

    // 3nd coordinate of triangle 2
    vertices[i++] = sin(angle + theta);
    vertices[i++] = cos(angle + theta);
    vertices[i++] = -0.5f;
    vertices[i++] = r;
    vertices[i++] = g;
    vertices[i++] = b;
}
// ------------------------------------------------ next is the top andz

    return 0;
}

// for (int j = 0; j < n; j++)
// {

//     float r = (float)rand() / (float)RAND_MAX;
//     float g = (float)rand() / (float)RAND_MAX;
//     float b = (float)rand() / (float)RAND_MAX;

//     // 1st coordinate of triangle 1
//     vertices[i++] = sin(angle);
//     vertices[i++] = cos(angle);
//     vertices[i++] = 0.5f;
//     vertices[i++] = r;
//     vertices[i++] = g;
//     vertices[i++] = b;

//     // 2nd coordinate of triangle 1
//     vertices[i++] = sin(angle);
//     vertices[i++] = cos(angle);
//     vertices[i++] = -0.5f;
//     vertices[i++] = r;
//     vertices[i++] = g;
//     vertices[i++] = b;

//     // 3nd coordinate of triangle 1
//     vertices[i++] = sin(angle + theta);
//     vertices[i++] = cos(angle + theta);
//     vertices[i++] = -0.5f;
//     vertices[i++] = r;
//     vertices[i++] = g;
//     vertices[i++] = b;

//         // 1st coordinate of triangle 2
//     vertices[i++] = sin(angle);
//     vertices[i++] = cos(angle);
//     vertices[i++] = 0.5f;
//     vertices[i++] = r;
//     vertices[i++] = g;
//     vertices[i++] = b;

//     // 2nd coordinate of triangle 2
//     vertices[i++] = sin(angle + theta);
//     vertices[i++] = cos(angle + theta);
//     vertices[i++] = 0.5f;
//     vertices[i++] = r;
//     vertices[i++] = g;
//     vertices[i++] = b;

//     // 3nd coordinate of triangle 2
//     vertices[i++] = sin(angle + theta);
//     vertices[i++] = cos(angle + theta);
//     vertices[i++] = -0.5f;
//     vertices[i++] = r;
//     vertices[i++] = g;
//     vertices[i++] = b;
// }


/*
float *vertices = (float *)malloc(18 * 4 * n * sizeof(float));
    float theta = 2 * 3.14159 / (float)n;
    int i = 0;
    int angle = 0;
    // ------------------------ all the rectangular faced triangle-----------------

    for (int j = 0; j < n; j++)
    {

        float r = (float)rand() / (float)RAND_MAX;
        float g = (float)rand() / (float)RAND_MAX;
        float b = (float)rand() / (float)RAND_MAX;

        // 1st coordinate of triangle 1
        vertices[i++] = cos(angle);
        vertices[i++] = sin(angle);
        vertices[i++] = 0.5f;
        vertices[i++] = r;
        vertices[i++] = g;
        vertices[i++] = b;

        // 2nd coordinate of triangle 1
        vertices[i++] = cos(angle);
        vertices[i++] = sin(angle);
        vertices[i++] = -0.5f;
        vertices[i++] = r;
        vertices[i++] = g;
        vertices[i++] = b;

        // 3nd coordinate of triangle 1
        vertices[i++] = cos(angle + theta);
        vertices[i++] = sin(angle + theta);
        vertices[i++] = -0.5f;
        vertices[i++] = r;
        vertices[i++] = g;
        vertices[i++] = b;

        // 1st coordinate of triangle 2
        vertices[i++] = cos(angle);
        vertices[i++] = sin(angle);
        vertices[i++] = 0.5f;
        vertices[i++] = r;
        vertices[i++] = g;
        vertices[i++] = b;

        // 2nd coordinate of triangle 2
        vertices[i++] = cos(angle + theta);
        vertices[i++] = sin(angle + theta);
        vertices[i++] = 0.5f;
        vertices[i++] = r;
        vertices[i++] = g;
        vertices[i++] = b;

        // 3nd coordinate of triangle 2
        vertices[i++] = cos(angle + theta);
        vertices[i++] = sin(angle + theta);
        vertices[i++] = -0.5f;
        vertices[i++] = r;
        vertices[i++] = g;
        vertices[i++] = b;

        angle += theta;
    }
    // ------------------------------------------------ next is the top and bottom triangle------------------------

    float r = (float)rand() / (float)RAND_MAX;
    float g = (float)rand() / (float)RAND_MAX;
    float b = (float)rand() / (float)RAND_MAX;
    angle = 0;
    for (int i = 0; i < n; i++)
    {
        // 1st coordinate of triangle 2
        vertices[i++] = cos(angle);
        vertices[i++] = sin(angle);
        vertices[i++] = 0.5f;
        vertices[i++] = r;
        vertices[i++] = g;
        vertices[i++] = b;

        // 2nd coordinate of triangle 2
        vertices[i++] = cos(angle + theta);
        vertices[i++] = sin(angle + theta);

        vertices[i++] = 0.5f;
        vertices[i++] = r;
        vertices[i++] = g;
        vertices[i++] = b;

        // 3nd coordinate of triangle 2
        vertices[i++] = 0;
        vertices[i++] = 0;
        vertices[i++] = 0.5f;
        vertices[i++] = r;
        vertices[i++] = g;
        vertices[i++] = b;
        angle += theta;
    }

    r = (float)rand() / (float)RAND_MAX;
    g = (float)rand() / (float)RAND_MAX;
    b = (float)rand() / (float)RAND_MAX;
    angle = 0;
    for (int i = 0; i < n; i++)
    {
        // 1st coordinate of triangle 2
        vertices[i++] = cos(angle);
        vertices[i++] = sin(angle);
        vertices[i++] = -0.5f;
        vertices[i++] = r;
        vertices[i++] = g;
        vertices[i++] = b;

        // 2nd coordinate of triangle 2
        vertices[i++] = cos(angle + theta);
        vertices[i++] = sin(angle + theta);
        vertices[i++] = -0.5f;
        vertices[i++] = r;
        vertices[i++] = g;
        vertices[i++] = b;

        // 3nd coordinate of triangle 2
        vertices[i++] = 0;
        vertices[i++] = 0;
        vertices[i++] = -0.5f;
        vertices[i++] = r;
        vertices[i++] = g;
        vertices[i++] = b;
        angle += theta;
    }

*/