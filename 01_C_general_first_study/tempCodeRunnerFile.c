        while (text_1[j]!=EOF)
        {
            if (text_2[i]==text_1[j]){//символ найден
                flag=0; 
                for (int k=j;k<strlen(text_1)-1;k+=1){text_1[k]=text_1[k+1];}//стираем символ найденный в тексте
                text_1[strlen(text_1)-1]='\0';
                break;}
            else {flag=1;}
        j+=1;
        }
    if (flag==1) break;

    }
    flag==0? printf("yes") : printf("no");
    return 0;
}