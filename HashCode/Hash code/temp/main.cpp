#include <bits/stdc++.h>
#include <fstream>

using namespace std;

class customer{
    public:
        int person_number;
        int likes_num = 0;
        int dislike_num = 0;
        vector<string> likes_vec;
        vector<string> dislikes_vec;
        customer* next = NULL;
};

customer*head;
int max_customer_pizza = 0;
vector<string>max_customer_pizza_vec;

bool likesFunc(customer* cust, vector<string> vec){
    int n=vec.size();
    map<string,int>mp;
    for(int i=0;i<n;i++){
        mp[vec[i]]++;
    }
    for(int i=0;i<cust->likes_vec.size();i++){
        if(!mp.count(cust->likes_vec[i])){
            return false;
        }
    }
    return true;
}

bool dislikesFunc(customer* cust, vector<string> vec){
    int n=vec.size();
    map<string,int>mp;
    for(int i=0;i<n;i++){
        mp[vec[i]]++;
    }
    for(int i=0;i<cust->dislikes_vec.size();i++){
        if(mp.count(cust->dislikes_vec[i])){
            return false;
        }
    }
    return true;
}

void printArray(vector<string> vec)
{
    customer* headC = head;
    int temp=0;
    while(headC!=NULL){
        if(likesFunc(headC,vec) && dislikesFunc(headC,vec)){
            temp++;
        }

        headC=headC->next;
    }
    if(temp > max_customer_pizza){
        max_customer_pizza = temp;
        max_customer_pizza_vec = vec;
        // cout<<"answer updated at person number : "<<headC->person_number<<endl;
        cout<<"temp "<<temp<<endl;
    }
}

void printSubsequences(vector<string> arr, int index, vector<string> subarr) {
    if (index == arr.size()) {
        if (subarr.size() != 0){
            printArray(subarr);
        }
        return;
    }
    printSubsequences(arr, index + 1, subarr);
    subarr.push_back(arr[index]);
    printSubsequences(arr, index + 1, subarr);
    return;
}


int main(){



    vector<string>vector_input;
    int globalIntForVec=0;
    string s;
    ifstream fileinput;
    fileinput.open("input.txt");
    if(fileinput.is_open()){
        s.empty();
        while(fileinput>>s){
            vector_input.push_back(s);
        }
    }else{
        cout<<"error"<<endl;
    }
    fileinput.close();
    for(int i=0;i<vector_input.size();i++){
        cout<<vector_input[i]<<" ";
    }
    cout<<endl;
    cout<<vector_input.size()<<endl;
    // ------------------------

    int person_num;

    cin>>person_num;

    map<string,int> mp_diff_ingd;
    customer*prev=NULL;
    for(int i=0;i<person_num;i++){
        customer* temp = new customer();
        temp->person_number=i;
        if(i==0){
            head=temp;
            prev=temp;
        }else{
            prev->next=temp;
            prev=temp;
        }
        cin>>temp->likes_num;
        for(int j=0;j<temp->likes_num;j++){
            string temp_s;
            cin>>temp_s;
            temp->likes_vec.push_back(temp_s);
            mp_diff_ingd[temp_s]++;
        }
        cin>>temp->dislike_num;
        for(int j=0;j<temp->dislike_num;j++){
            string temp_s;
            cin>>temp_s;
            temp->dislikes_vec.push_back(temp_s);
            mp_diff_ingd[temp_s]++;
        }
    }
    vector<string>vec_diff_ingd;
    for(auto it=mp_diff_ingd.begin();it!=mp_diff_ingd.end();it++){
        vec_diff_ingd.push_back(it->first);
    }
    vector<string> b;
    printSubsequences(vec_diff_ingd, 0,b);

    cout<<"\nFinal answer ------- \nTotal "<<max_customer_pizza<<" customer stisfied\nby flllowing ingridient\n"<<endl;
    for(int i=0;i<max_customer_pizza_vec.size();i++){
        cout<<max_customer_pizza_vec[i]<<" ";
    }

    return 0;
}
