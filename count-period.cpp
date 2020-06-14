#include <iostream>

using namespace std;

int main()
{
    int n, i, j, k, tam;
    string palavra;
    int flag = true;

    cout << "Number of tests: ";
    cin >> n;

    while(n--){

        cout << "Type the word: ";
        cin >> palavra;
        tam = palavra.length();

        for(i=1; i<=tam; i++){
            if(tam%i != 0)
                continue;

            for(j=i; j<tam; j++){
                if(palavra[j] != palavra[j%i]){
                    flag = false;
                    break;
                }
            }

            if(flag)
                break;

            flag = true;
        }
        cout << i << ", ";
        for(k=0; k<i; k++){
            cout << palavra[k];
        }
        cout << endl;
    }
    return 0;
}

