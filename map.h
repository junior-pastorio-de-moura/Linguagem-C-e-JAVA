typedef int Chave; //Tipo das chaves
typedef char Valor[22];
typedef struct map{
    Chave chave;
    Valor valor;
    struct map *prox;
} *Map;