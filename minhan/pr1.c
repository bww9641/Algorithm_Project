#include<stdio.h>
#include<string.h>

struct st{
  char name[105];
  int level,happy,hung;
};

struct st list[55];
int num; //데려온 강아지 마리 수

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
  printf("1. 데려오기\n");
  printf("2. 놀아주기\n");
  printf("3. 먹이주기\n");
  printf("4. 상태보기\n\n");
  printf("5. 종료\n");
  printf("################\n");
  printf("...");
}

void bring(){
  int i;
  char temp_name[105]={};
  printf("이름:");
  scanf("%s", temp_name);
  for(i=0;i<num;i++)
  {
    if(!strcmp(temp_name,list[i].name))
    {
      printf("우리 집엔 동일한 강아지가 있어요.\n");
      return ;
    }
  }
  if(num==55)
  {
    printf("현재 집에 강아지가 많아서 키울 수 없어요.\n");
    return ;
  }
  printf("%s 강아지가 우리 집에 왔어요\n",list[num].name);
  list[num].level=1;
  list[num].happy=0;
  list[num].hung=0;
  printf("현재 레벨:%d 행복도:%d 포만감:%d\n",list[num].level,list[num].happy,list[num].hung);
  printf("행복도와 포만감이 10가 되면, 레벨이 올라가요\n");
  printf("레벨은 최고 20까지 올라가요\n\n");
  num++;
}

void play(){
  int i,check=0;
  char temp_name[105]={};
  if(num==0)
  {
    printf("놀아줄 강아지가 없어요.\n");
    return ;
  }
  printf("이름:");
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
    printf("뛰어놀면 행복도가 5 증가합니다.\n");
    printf("알아주면 행복도가 2 증가합니다.\n");
    printf("뛰어놀기(1) 안아주기(2):");
    scanf("%d",&choice);
    if(list[i].level==20)
    {
      printf("현재 강아지는 최고 레벨이라 더 이상 올라가지 않아요.");
      return ;
    }
    if(choice==1) list[i].happy+=5;
    else if(choice==2) list[i].happy+=2;
    if(list[i].happy>=10)
    {
      list[i].level++;
      list[i].happy-=10;
    }
    printf("현재 강아지의 레벨은 %d이고 행복도는 %d 입니다.\n",list[i].level,list[i].happy);
  }
  else
  {
    printf("그런 강아지는 우리집에 없어요!\n");
  }
}

void feed(){
  int i,check=0;
  char temp_name[105]={};
  if(num==0)
  {
    printf("놀아줄 강아지가 없어요.\n");
    return ;
  }
  printf("이름:");
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
    printf("사료를 주면 포만감이 6 증가합니다.\n");
    printf("간식을 주면 포만감이 3 증가합니다.\n");
    printf("사료주기(1) 간식주기(2):");
    scanf("%d",&choice);
    if(list[i].level==20)
    {
      printf("현재 강아지는 최고 레벨이라 더 이상 올라가지 않아요.");
      return ;
    }
    if(choice==1) list[i].hung+=6;
    else if(choice==2) list[i].hung+=3;
    if(list[i].hung>=10)
    {
      list[i].level++;
      list[i].hung-=10;
    }
    printf("현재 강아지의 레벨은 %d이고 포만감은 %d 입니다.\n",list[i].level,list[i].hung);
  }
  else
  {
    printf("그런 강아지는 우리집에 없어요!\n");
  }
}

void task(){
  int i,j;
  if(num==0)
  {
    printf("현재 우리집에 강아지가 없어요\n");
    return ;
  }
  for(i=0;i<num;i++)
  {
    printf("[%s]\n",list[i].name);
    printf("레벨[%3d]:",list[i].level);
    for(j=0;j<list[i].level;j++) printf("*");
    printf("\n행복[%3d]:",list[i].happy);
    for(j=0;j<list[i].happy;j++) printf(".");
    printf("\n포만[%3d]:", list[i].hung);
    for(j=0;j<list[i].hung;j++) printf(".");
    printf("\n\n");
  }
}