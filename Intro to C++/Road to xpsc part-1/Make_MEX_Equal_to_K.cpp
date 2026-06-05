#include<bits/stdc++.h>
using namespace std;

int main()
    {
        /*
        problem :
        -> Mex find kore seta k er soman hote hole koyta operation lagbe
        solution :
        1. jodi k er value array te thake taile seta impossible
        to find. so cout is "-1".
        2. jodi k missing hoy taile k er ager sob digit count korlei
        ans beriye jabe.

        */
        
        int n;
        cin >> n;
        //input array
        int ar[n];
        for(int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        //input k
        int k;
        cin >> k;

        //searching k missing or not;
        int flag = 0;
        for(int i = 0; i < n; i++)
        {
            if(ar[i] == k)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 1)
        {
            //k array te thakle 
            cout <<"-1";
        }
        else{
            //k array te na thakle
            int count = 0;
            for(int i = 0; i < k; i++)
            {
                // value i er soman ki na
                int present = 0;
                for(int j = 0; j < n; j++)
                {
                    if(ar[j] == i)
                    {
                        present = 1;
                    }
                }
    
                if(present == 0)
                {
                    //jodi i er soman na hoy
                    count++;
                }
                
            }
            cout << count;
        }


        
        return 0;
    }