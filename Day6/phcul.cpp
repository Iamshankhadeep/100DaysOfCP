#include<bits/stdc++.h>
using namespace std;
long double distance(long double a,long double b){
    if(a==0 && b==0)
        return 0;
    return sqrt(a*a+b*b);
}
int main(){
    int a;
    cin>>a;
    while(a--){
        long double x,y,n,m,k,tempx,tempy;
        long double tempvala=DBL_MAX,faltu1,faltu2,faltu3;
        cin>>x>>y;
        cin>>n>>m>>k;
        vector<pair<long double,long double>> a,c,e;
        for (int i = 0; i < n; i++)
        {
            cin>>tempx>>tempy;
            a.push_back(make_pair(tempx,tempy));
        }
        for (int i = 0; i < m; i++)
        {
            cin>>tempx>>tempy;
            c.push_back(make_pair(tempx,tempy));
        }
        for (int i = 0; i < k; i++)
        {
            cin>>tempx>>tempy;
            e.push_back(make_pair(tempx,tempy));
        }
        tempvala = distance(x-a[0].first,y-a[0].second)+distance(a[0].first-c[0].first,
                a[0].second-c[0].second)+distance(c[0].first-e[0].first,c[0].second-e[0].second);
        for(int i=0; i<n;i++)
        {
            faltu1 = distance(x-a[i].first,y-a[i].second);
            if(faltu1<tempvala){
                for (int j = 0; j < m; j++)
                {
                    faltu2 = distance(a[i].first-c[j].first,a[i].second-c[j].second);
                    if(faltu1+faltu2<tempvala){
                        for (int l = 0; l < k; l++)
                        {
                            faltu3 = distance(c[j].first-e[l].first,c[j].second-e[l].second);
                            if(faltu1+faltu2+faltu3<tempvala){
                                tempvala = faltu1+faltu3+faltu2;
                            }
                        }
                    }
                }
            }
        }
        for(int i=0; i<m;i++)
        {
            faltu1 = distance(x-c[i].first,y-c[i].second);
            if(faltu1<tempvala){
                for (int j = 0; j < n; j++)
                {
                    faltu2 = distance(c[i].first-a[j].first,c[i].second-a[j].second);
                    if(faltu1+faltu2<tempvala){
                        for (int l = 0; l < k; l++)
                        {
                            faltu3 = distance(a[j].first-e[l].first,a[j].second-e[l].second);
                            if(faltu1+faltu2+faltu3<tempvala){
                                tempvala = faltu1+faltu3+faltu2;
                            }
                        }
                    }
                }
            }
        }
        cout<<fixed<<setprecision(10)<<tempvala<<endl;
    }

}

// long double distance(long double a,long double b){
//     if(a==0 && b==0)
//         return 0;
//     return sqrt(a*a+b*b);
// }

// int main(){
//     int a;
//     cin>>a;
//     while(a--){
//         long double x,y,n,m,k,tempx,tempy,tempxc,tempyc,tempxe,tempye,curx,cury;
//         long double tempvala=DBL_MAX,faltu,faltu2;
//         long double tempvalc=DBL_MAX,tempvale;
//         cin>>x>>y;
//         cin>>n>>m>>k;
//         vector<pair<long double,long double>> a,c,e;
//         for (int i = 0; i < n; i++)
//         {
//             cin>>tempx>>tempy;
//             a.push_back(make_pair(tempx,tempy));
//         }
//         for (int i = 0; i < m; i++)
//         {
//             cin>>tempx>>tempy;
//             c.push_back(make_pair(tempx,tempy));
//         }
//         for (int i = 0; i < k; i++)
//         {
//             cin>>tempx>>tempy;
//             e.push_back(make_pair(tempx,tempy));
//         }
//         bool value = false;
//         for (int i = 0; i < k; i++)
//         {
//             if(x==e[i].first && y==e[i].second){
//                 value = true;
//                 break;
//             }
//         }
        
        
//         for (int i = 0; i < a.size(); i++)
//         {
//             faltu = distance(fabs(x-a[i].first),fabs(y-a[i].second));
//             if(faltu<tempvala){
//                 tempvala = faltu;
//                 tempx = a[i].first;
//                 tempy = a[i].second;
//             }
//         }
//         tempvalc = DBL_MAX;
//             for (int i = 0; i < c.size(); i++)
//             {
//                 faltu = distance(fabs(tempx-c[i].first),fabs(tempy-c[i].second));
//                 if(faltu<tempvalc){
//                     tempvalc = faltu;
//                     tempxc = c[i].first;
//                     tempyc = c[i].second;
//                 }
//             }
//             //cout<<"type1"<<tempx<<" "<<tempy<<" "<<tempxc<<" "<<tempyc<<endl;
//             tempvale = DBL_MAX;
//             for (int i = 0; i < e.size(); i++)
//             {
//                 faltu = distance(fabs(tempxc-e[i].first),fabs(tempyc-e[i].second));
//                 if(faltu<tempvale){
//                     tempvale = faltu;
//                     tempxe = e[i].first;
//                     tempye = e[i].second;
//                 }
//             }
//         faltu2 = tempvale+tempvalc+tempvala;
//         tempvalc = DBL_MAX;
//         for (int i = 0; i < c.size(); i++)
//         {
//             faltu = distance(fabs(x-c[i].first),fabs(y-c[i].second));
//             if(faltu<tempvalc){
//                 tempvalc = faltu;
//                 tempxc = c[i].first;
//                 tempyc = c[i].second;
//             }
//         }
//         tempvala = DBL_MAX;
//             for (int i = 0; i < a.size(); i++)
//             {
//                 faltu = distance(fabs(tempxc-a[i].first),fabs(tempyc-a[i].second));
//                 if(faltu<tempvala){
//                     tempvala = faltu;
//                     tempx = a[i].first;
//                     tempy = a[i].second;
//                 }
//             }
//             tempvale = DBL_MAX;
//             for (int i = 0; i < e.size(); i++)
//             {
//                 faltu = distance(fabs(tempx-e[i].first),fabs(tempy-e[i].second));
//                 if(faltu<tempvale){
//                     tempvale = faltu;
//                     tempxe = e[i].first;
//                     tempye = e[i].second;
//                 }
//             }
//         //    cout<<"type1"<<tempx<<" "<<tempy<<" "<<tempxc<<" "<<tempyc<<" "<<tempxe<<" "<<tempye<<endl;
//         //cout<<"value"<<tempvalc<<" "<<tempvala<<" "<<tempvale;
//         faltu = tempvale + tempvalc +tempvala;
//         //cout<<"val"<<faltu2<<" "<<faltu<<endl;
//         if(!value)
//             cout<<fixed<<setprecision(10)<<min(faltu,faltu2)<<endl;
//         else
//         {
//             puts("0");
//         }
        
//     }
// }