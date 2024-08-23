#include <stdio.h>

int soma(int n){
    int i, soma = 0;
    for(i=0; i<=n; i++){
        soma = soma + i;
    }
    return soma;
}

int recursao_soma(int n){
    if(n == 0){
        return 0;
    }
    return n + recursao_soma(n-1);
}

int digitos(int n){
    int soma = 0;
    while(n!=0){
        soma += n % 10;
        n = n / 10;
    }
    return soma;
}

int digitos_rec(int n){
    if(n<10){
        return n;
    }
    return n % 10 + digitos_rec(n/10);
}

int maior_vetor(int v[], int tamanho){
    int i, maior = 0;
    for(i=tamanho-1;i>=0; i--){
        if(v[i] > maior){
            maior = v[i];
        }
    }
    return maior;
}

int maior_vetor_rec(int v[], int tamanho){
    if (tamanho == 1){
        return v[0];
    }
    int max = maior_vetor_rec(v, tamanho - 1); 
    if(v[tamanho] > max){
        return v[tamanho];
    }
    return max;
}

int soma_vetor_rec(int v[], int tamanho){
    if(tamanho == 1){
        return v[0];
    }
    return v[tamanho - 1] + soma_vetor_rec(v, tamanho - 1);
    
}

int main(){
    int resultado, V[] = {3, 1, 4, 1,5,9};
    resultado = soma_vetor_rec(V, 6);
    printf("%d ", resultado);
}