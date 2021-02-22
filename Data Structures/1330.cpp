#include <iostream> 
#include <vector>
#include <map> 
using namespace std;


typedef vector<int> vi;
typedef vector<vi> vii;


int main() {

    int t;
    cin>>t;

    while (t--)
    {
        /* code */
        int n;
        cin>>n;

        int num = n-1;
        vector<int> parent(n+1,0); 
        vector<bool> visited(n+1,false); 

        while (num--)
        {
            /* code */
            int node1,node2;
            cin>>node1>>node2;
            parent[node2] = node1;
        }

        int n1,n2;
        cin>>n1>>n2;

        int node = n1;
        while (node > 0)
        {
            /* code */
            visited[node] = true ;
            node = parent[node]; 
        }
        
        node = n2;
        while (!visited[node])
        {
            /* code */
            node = parent[node];
        }
        
        cout<<node<<endl;
        
    }
    return 0; 
}
