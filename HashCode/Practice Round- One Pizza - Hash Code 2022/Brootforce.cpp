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

int tempalpha=0;
void printArray(vector<string> vec)
{
    customer* headC = head;
    tempalpha=0;
    while(headC!=NULL){
        if(likesFunc(headC,vec) && dislikesFunc(headC,vec)){
            tempalpha++;
        }

        headC=headC->next;
    }
    if(tempalpha > max_customer_pizza){
        max_customer_pizza = tempalpha;
        max_customer_pizza_vec = vec;
        // cout<<"answer updated at person number : "<<headC->person_number<<endl;
        cout<<"temp "<<tempalpha<<endl;
    }
}

int tempabcd=0;
void printSubsequences(vector<string> arr, int index, vector<string> subarr) {
    if (index == arr.size()) {
        if (subarr.size() != 0){
            cout<<"recursion count "<<tempabcd<<" and ans till now is "<<tempalpha<<endl;
            tempabcd++;
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // string s;
    // ifstream fileinput;
    // fileinput.open("input.txt");
    // if(fileinput.is_open()){
    //     s.empty();
    //     while(fileinput>>s){
    //         vector_input.push_back(s);
    //     }
    // }else{
    //     cout<<"error"<<endl;
    // }
    // fileinput.close();
    // for(int i=0;i<vector_input.size();i++){
    //     cout<<vector_input[i]<<" ";
    // }
    // cout<<endl;
    // cout<<vector_input.size()<<endl;
    // ------------------------


    // vector<string>vector_input;
    // int globalIntForVec = 0;
    // vecor<string>vec;
    // int person_num = (int)vector_input[globalIntForVec];
    // globalIntForVec++;
    // todo: start
    ifstream inFile;
    inFile.open("input\\c_coarse.in.txt");
    if (!inFile.is_open()) {
        cout << "Unable to open file";
    }
    // todo: end
    int person_num;
    inFile>>person_num;
    // cin>>person_num;
    
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

        // temp->likes_num = vector_input[globalIntForVec]
        // globalIntForVec++;

        inFile>>temp->likes_num;
        // cin>>temp->likes_num;
        for(int j=0;j<temp->likes_num;j++){
            string temp_s;
            // temp->likes_num = vector_input[globalIntForVec]
            // globalIntForVec++;

            inFile>>temp_s;
            // cin>>temp_s;
            temp->likes_vec.push_back(temp_s);
            mp_diff_ingd[temp_s]++;
        }
        // temp->likes_num = vector_input[globalIntForVec]
        // globalIntForVec++;

        inFile>>temp->dislike_num;
        // cin>>temp->dislike_num;
        for(int j=0;j<temp->dislike_num;j++){
            string temp_s;
            // temp->likes_num = vector_input[globalIntForVec]
            // globalIntForVec++;

            inFile>>temp_s;
            // cin>>temp_s;
            temp->dislikes_vec.push_back(temp_s);
            mp_diff_ingd[temp_s]++;
        }
    }
    // todo: start
    inFile.close();
    // todo: end
    vector<string>vec_diff_ingd;
    cout<<"different ingridient map size = "<<mp_diff_ingd.size()<<endl;
    for(auto it=mp_diff_ingd.begin();it!=mp_diff_ingd.end();it++){
        vec_diff_ingd.push_back(it->first);
    }
    vector<string> b;
    printSubsequences(vec_diff_ingd, 0,b);

    cout<<"\nFinal answer ------- \nTotal "<<max_customer_pizza<<" customer stisfied\nby flllowing ingridient\n"<<endl;
    cout<<max_customer_pizza_vec.size()<<" ";
    for(int i=0;i<max_customer_pizza_vec.size();i++){
        cout<<max_customer_pizza_vec[i]<<" ";
    }

    return 0;
}