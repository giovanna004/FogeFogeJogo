#define HEROI '@'
#define FANTASMA 'F'
#define VAZIO '.'
#define PAREDE_VERTICAL '|'
#define PAREDE_HORIZONTAL '-'
#define PILULA 'P'
  
struct mapa {
  char** matriz;
  int linhas;
  int colunas;
};

typedef struct mapa MAPA;

struct posicao {
  int x;
  int y;
};

typedef struct posicao POSICAO;

void liberaMapa(MAPA* m);
void leMapa(MAPA* m);
void alocaMapa(MAPA* m);
void imprimeMapa(MAPA* m);
int encontraMapa(MAPA* m, POSICAO* p, char c);

int ehVazia(MAPA* m, int x, int y);
int ehValida(MAPA* m, int x, int y);
void andaNoMapa(MAPA* m, int xOrigem, int yOrigem, int xDestino, int yDestino);

void copiaMapa(MAPA* destino, MAPA* origem);

int podeAndar(MAPA* m, char personagem, int x, int y);

int ehParede(MAPA* m, int x, int y);

int ehPersonagem(MAPA* m, char personagem, int x, int y);

