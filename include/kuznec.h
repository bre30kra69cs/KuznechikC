// Функции шифрования
long long int* X(long long int* input_1, long long int* input_2);

long long int* rS(long long int* input);

long long int* S(long long int* input);

long long int* rL(long long int* input);

long long int* L(long long int* input);

long long int* F(long long int* input_1, long long int* input_0, long long int* c);

long long int** KGEN(long long int* K);

long long int* ENC(long long int* input, long long int* key);

long long int* DEC(long long int* input, long long int* key);

// Таблицы шифрования
long long int l_16[256][2];

long long int l_15[256][2];

long long int l_14[256][2]; 

long long int l_13[256][2]; 

long long int l_12[256][2]; 

long long int l_11[256][2]; 

long long int l_10[256][2]; 

long long int l_09[256][2]; 

long long int l_08[256][2]; 

long long int l_07[256][2]; 

long long int l_06[256][2]; 

long long int l_05[256][2];

long long int l_04[256][2]; 

long long int l_03[256][2]; 

long long int l_02[256][2]; 

long long int l_01[256][2]; 

long long int s[256];

long long int rs[256];

long long int rl_16[256][2];

long long int rl_15[256][2];

long long int rl_14[256][2]; 

long long int rl_13[256][2];

long long int rl_12[256][2];

long long int rl_11[256][2];

long long int rl_10[256][2];

long long int rl_09[256][2]; 

long long int rl_08[256][2]; 

long long int rl_07[256][2]; 

long long int rl_06[256][2]; 

long long int rl_05[256][2]; 

long long int rl_04[256][2]; 

long long int rl_03[256][2];

long long int rl_02[256][2];

long long int rl_01[256][2];

long long int c[32][2];