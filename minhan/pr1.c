#include<stdio.h>
#include<string.h>

struct st{
  char name[105];
  int level,happy,hung;
};

struct st list[55];
int num; //������ ������ ���� ��

void menu();
void bring();
void play();
void feed();
void task();

int main()
{
  int sw;
  while(1)
  {
    menu();
    scanf("%d",&sw);
    switch(sw)
    {
      case 1:
        bring();
        break;
      case 2:
        play();
        break;
      case 3:
        feed();
        break;
      case 4:
        task();
        break;
        case 5:
        return 0;
    }
  }
}

void menu(){
  printf("################\n");
  printf("1. ��������\n");
  printf("2. ����ֱ�\n");
  printf("3. �����ֱ�\n");
  printf("4. ���º���\n\n");
  printf("5. ����\n");
  printf("################\n");
  printf("...");
}

void bring(){
  int i;
  char temp_name[105]={};
  printf("�̸�:");
  scanf("%s", temp_name);
  for(i=0;i<num;i++)
  {
    if(!strcmp(temp_name,list[i].name))
    {
      printf("�츮 ���� ������ �������� �־��.\n");
      return ;
    }
  }
  if(num==55)
  {
    printf("���� ���� �������� ���Ƽ� Ű�� �� �����.\n");
    return ;
  }
  printf("%s �������� �츮 ���� �Ծ��\n",list[num].name);
  list[num].level=1;
  list[num].happy=0;
  list[num].hung=0;
  printf("���� ����:%d �ູ��:%d ������:%d\n",list[num].level,list[num].happy,list[num].hung);
  printf("�ູ���� �������� 10�� �Ǹ�, ������ �ö󰡿�\n");
  printf("������ �ְ� 20���� �ö󰡿�\n\n");
  num++;
}

void play(){
  int i,check=0;
  char temp_name[105]={};
  if(num==0)
  {
    printf("����� �������� �����.\n");
    return ;
  }
  printf("�̸�:");
  scanf("%s",temp_name);
  for(i=0;i<num;i++)
  {
    if(!strcmp(temp_name,list[i].name))
    {
      check=1;
      break;
    }
  }
  if(check==1)
  {
    int choice;
    printf("�پ��� �ູ���� 5 �����մϴ�.\n");
    printf("�˾��ָ� �ູ���� 2 �����մϴ�.\n");
    printf("�پ���(1) �Ⱦ��ֱ�(2):");
    scanf("%d",&choice);
    if(list[i].level==20)
    {
      printf("���� �������� �ְ� �����̶� �� �̻� �ö��� �ʾƿ�.");
      return ;
    }
    if(choice==1) list[i].happy+=5;
    else if(choice==2) list[i].happy+=2;
    if(list[i].happy>=10)
    {
      list[i].level++;
      list[i].happy-=10;
    }
    printf("���� �������� ������ %d�̰� �ູ���� %d �Դϴ�.\n",list[i].level,list[i].happy);
  }
  else
  {
    printf("�׷� �������� �츮���� �����!\n");
  }
}

void feed(){
  int i,check=0;
  char temp_name[105]={};
  if(num==0)
  {
    printf("����� �������� �����.\n");
    return ;
  }
  printf("�̸�:");
  scanf("%s",temp_name);
  for(i=0;i<num;i++)
  {
    if(!strcmp(temp_name,list[i].name))
    {
      check=1;
      break;
    }
  }
  if(check==1)
  {
    int choice;
    printf("��Ḧ �ָ� �������� 6 �����մϴ�.\n");
    printf("������ �ָ� �������� 3 �����մϴ�.\n");
    printf("����ֱ�(1) �����ֱ�(2):");
    scanf("%d",&choice);
    if(list[i].level==20)
    {
      printf("���� �������� �ְ� �����̶� �� �̻� �ö��� �ʾƿ�.");
      return ;
    }
    if(choice==1) list[i].hung+=6;
    else if(choice==2) list[i].hung+=3;
    if(list[i].hung>=10)
    {
      list[i].level++;
      list[i].hung-=10;
    }
    printf("���� �������� ������ %d�̰� �������� %d �Դϴ�.\n",list[i].level,list[i].hung);
  }
  else
  {
    printf("�׷� �������� �츮���� �����!\n");
  }
}

void task(){
  int i,j;
  if(num==0)
  {
    printf("���� �츮���� �������� �����\n");
    return ;
  }
  for(i=0;i<num;i++)
  {
    printf("[%s]\n",list[i].name);
    printf("����[%3d]:",list[i].level);
    for(j=0;j<list[i].level;j++) printf("*");
    printf("\n�ູ[%3d]:",list[i].happy);
    for(j=0;j<list[i].happy;j++) printf(".");
    printf("\n����[%3d]:", list[i].hung);
    for(j=0;j<list[i].hung;j++) printf(".");
    printf("\n\n");
  }
}