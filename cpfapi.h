int uim_reg_usr(char *);
int svc_reg(char *,int );
void svcmgr_get_svc_list(char *);
/*
void sub_subscribe(char []);
void start_session(char []);
void end_session(char []);*/
char* User_Validation(char *);
int Command_Interpreter(char *);
char* getDecStr(char*,int,int);
int uid_retrive();
void id_validation(char* );
int count1 = 0;
struct Uim{
	int iUid;
	char cName[12];
	char cMailid[16];
}uim[150]; 
