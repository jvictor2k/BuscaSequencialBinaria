int buscaSeq(int tama, int* v, int n)
{
    for(int i = 0; i <= tama-1; i++)
    {
        if(v[i] == n)
        {
            return i;
        }
    }

    return -1;
}

int buscaBinaria(int tama, int* v, int n)
{
    int inicio = 0;
    int fim = tama-1;
    int meio;

    while(inicio <= fim)
    {
        meio = (inicio + fim)/2;
        if (n < v[meio])
        {
            fim = meio-1;
        }
        else if(n > v[meio])
        {
            inicio = meio+1;
        }
        else
        {
            return meio;
        }
    }

    return -1;
}