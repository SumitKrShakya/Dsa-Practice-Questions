#include<bits/stdc++.h>
using namespace std;
int frnd_srvd=0,price=0,e=0,h=0;
int calculate(int ef,int hf,int val_abc,int abc123,int n){
    if(abc123==1){
        frnd_srvd=frnd_srvd+(ef/2);
        if(frnd_srvd>n){
            int thistimeserved=(ef/2)-(frnd_srvd-n);
            price=price+(thistimeserved*val_abc);
            e=e-(thistimeserved*2);
            frnd_srvd=n;
        }else{
            price=price+(val_abc*(ef/2));
            e=ef-((ef/2)*2);
        }
    }else if(abc123==2){
        frnd_srvd=frnd_srvd+(hf/3);
        if(frnd_srvd>n){
            int thistimeserved=(hf/3)-(frnd_srvd-n);
            price=price+(thistimeserved*val_abc);
            h=hf-(thistimeserved*3);
            frnd_srvd=n;
        }else{
            price=price+(val_abc*(hf/3));
            h=hf-((hf/3)*3);
        }
    }else if(abc123==3){
        if(hf==ef){
            frnd_srvd=frnd_srvd+(hf);
            if(frnd_srvd>n){
                int thistimeserved=hf-(frnd_srvd-n);
                price=price+(thistimeserved*val_abc);
                e=ef-thistimeserved;
                h=hf-thistimeserved;
                frnd_srvd=n;
            }else{
                price=price+(val_abc*(hf));
                e=0;
                h=0;
            }
        }else if(hf>ef){
            frnd_srvd=frnd_srvd+(ef);
            if(frnd_srvd>n){
                int thistimeserved=ef-(frnd_srvd-n);
                price=price+(thistimeserved*val_abc);
                e=ef-thistimeserved;
                h=hf-thistimeserved;
                frnd_srvd=n;
            }else{
                price=price+(val_abc*(ef));
                e=0;
                h=hf-ef;
            }
        }else if(ef>hf){
            frnd_srvd=frnd_srvd+(hf);
            if(frnd_srvd>n){
                int thistimeserved=hf-(frnd_srvd-n);
                price=price+(thistimeserved*val_abc);
                e=ef-thistimeserved;
                h=hf-thistimeserved;
                frnd_srvd=n;
            }else{
                price=price+(val_abc*(hf));
                e=ef-hf;
                h=0;
            }
        }
    }
}
int main()
{
    int t;
    cin>>t;
    for(t;t>0;t--){
        int n=0,abc[3];
        frnd_srvd=0;
        price=0;
        e=0;
        h=0;
        cin>>n>>e>>h>>abc[0]>>abc[1]>>abc[2];
        int a=abc[0],b=abc[1],c=abc[2];
        sort(abc,abc+3);
        if(a==b&&b==c){
            frnd_srvd==n?n:calculate(e,h,c,3,n);
            frnd_srvd==n?n:calculate(e,h,a,1,n);
            frnd_srvd==n?n:calculate(e,h,b,2,n);
        }else if(a==b&&b<c){
            frnd_srvd==n?n:calculate(e,h,a,1,n);
            frnd_srvd==n?n:calculate(e,h,b,2,n);
            frnd_srvd==n?n:calculate(e,h,c,3,n);
        }else if(b==c&&c<a){
            frnd_srvd==n?n:calculate(e,h,b,2,n);
            frnd_srvd==n?n:calculate(e,h,c,3,n);
            frnd_srvd==n?n:calculate(e,h,a,1,n);
        }else if(c==a&&a<b){
            frnd_srvd==n?n:calculate(e,h,c,3,n);
            frnd_srvd==n?n:calculate(e,h,a,1,n);
            frnd_srvd==n?n:calculate(e,h,b,2,n);
        }else{
            if(abc[0]==a){
                frnd_srvd==n?n:calculate(e,h,a,1,n);
                if(abc[1]==b){
                    frnd_srvd==n?n:calculate(e,h,b,2,n);
                    frnd_srvd==n?n:calculate(e,h,c,3,n);
                }else{
                    frnd_srvd==n?n:calculate(e,h,c,3,n);
                    frnd_srvd==n?n:calculate(e,h,b,2,n);
                }
            }else if(abc[0]==b){
                frnd_srvd==n?n:calculate(e,h,b,2,n);
                if(abc[1]==a){
                    frnd_srvd==n?n:calculate(e,h,a,1,n);
                    frnd_srvd==n?n:calculate(e,h,c,3,n);
                }else{
                    frnd_srvd==n?n:calculate(e,h,c,3,n);
                    frnd_srvd==n?n:calculate(e,h,a,1,n);
                }
            }else{
                frnd_srvd==n?n:calculate(e,h,c,3,n);
                if(abc[1]==a){
                    frnd_srvd==n?n:calculate(e,h,a,1,n);
                    frnd_srvd==n?n:calculate(e,h,b,2,n);
                }else{
                    frnd_srvd==n?n:calculate(e,h,b,2,n);
                    frnd_srvd==n?n:calculate(e,h,a,1,n);
                }
            }
        }

        if(frnd_srvd<n){
            cout<<"-1";
        }else{
            cout<<price;
        }
    }
    return 0;
}
