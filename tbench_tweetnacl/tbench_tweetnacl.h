
#define TBENCH_DH_X25519 tbench_tweetnacl_x25519
#define TBENCH_DH_WEI25519_1_TO_X25519 tbench_tweetnacl_wei_to_mt
#define TBENCH_DH_ED25519_TO_X25519 tbench_tweetnacl_ed_to_mt

int tbench_tweetnacl_x25519(long* acycles, int i);
int tbench_tweetnacl_wei_to_mt(long* acycles, int i);
int tbench_tweetnacl_ed_to_mt(long* acycles, int i);