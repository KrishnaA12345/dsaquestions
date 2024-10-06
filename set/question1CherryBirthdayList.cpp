// Cherry's birthday is coming this month! She wants to plan a Birthday party and is preparing an invite list with her friend Aashi. she asks Aashi to tell her names to add to the list.

// Aashii is a random guy and keeps coming up with names of people randomly to add to the invite list, even if the name is already on the list! Cherry hates redundancy and hence, enlists the names only once.

// Find the final invite-list, that contain names without any repetition.

// Input:

// First line of each test contains an integer N, the number of names that Aashi pops up with.

// Output:

// Output the final invite-list with each name in a new line. The names in the final invite-list are sorted lexicographically.

#include<iostream>
#include<set>
using namespace std;

int main(){
    int n;
    cout<<"enter nuber of guys"<<endl;
    cin>>n;

    set<string> inviteList;

    for(int i=0;i<n;i++){
        string name;
        cin>>name;

        inviteList.insert(name);

    }
    cout<<endl;
    cout<<"printing invitee list: "<<endl;
    for(auto name:inviteList){
        cout<<name<<endl;
    }
    return 0;
}