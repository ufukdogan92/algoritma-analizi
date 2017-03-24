#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

struct dugum
{
	int icerik;
	struct dugum *sol;
	struct dugum *sag;
};

struct ikili_arama_agaci
{
	struct dugum *kok;
};

void ikili_arama_agaci_olustur(struct ikili_arama_agaci **agac)
{
	*agac=(struct ikili_arama_agaci *)malloc( sizeof(struct ikili_arama_agaci) );
	if(*agac==NULL)
	{
		printf("Heap'te gerekli yer ayrilmadi...");
		exit(1);
	}
	(*agac)->kok=NULL;
}

int ikili_agac_bosmu(struct ikili_arama_agaci *agac)
{
	if(agac->kok==NULL)
		return 1;
	else
		return 0;
}

struct dugum *dugum_olustur(int icerik)
{
	struct dugum *d=(struct dugum *)malloc( sizeof(struct dugum) );
	if(d==NULL)
	{
		printf("Heap'te gerekli yer ayrilmadi...");
		exit(1);
	}
	d->icerik=icerik;
	d->sol=d->sag=NULL;
	return d;
}

void ekle(struct ikili_arama_agaci *agac,int icerik)
{
	struct dugum *dugum;
	struct dugum *d;
	struct dugum *geri;

	d=agac->kok;
	while(d!=NULL)
	{
		geri=d;
		if(icerik < d->icerik)
			d=d->sol;
		else if(icerik > d->icerik)
			d=d->sag;
		else
			return;
	}
	dugum=dugum_olustur(icerik);
	if(agac->kok==NULL)
	{
		agac->kok=dugum;
		return;
	}
	if(icerik < geri->icerik)
		geri->sol=dugum;
	else
		geri->sag=dugum;
}



void preorder_yardimci(struct dugum *kok)
{
	if(kok==NULL)
		return;
	printf("%4d ",kok->icerik);
	preorder_yardimci(kok->sol);
	preorder_yardimci(kok->sag);
}

void preorder(struct ikili_arama_agaci *agac)
{
	if(agac==NULL)
		return;
	preorder_yardimci(agac->kok);
	printf("\n");
}




int dugum_sayisi(struct dugum *kok)
{
	if(kok==NULL)
		return 0;
	return 1+dugum_sayisi(kok->sol)+dugum_sayisi(kok->sag);
}

int derinlik (struct dugum *kok){
  if(kok == NULL)
    return 0;
  int sag = derinlik(kok->sag);
  int sol = derinlik(kok->sol);
 if(sag>sol)
   return sag+1;
 return sol+1;
}





int main()
{
    srand (time(NULL));
	struct ikili_arama_agaci *agac;

	ikili_arama_agaci_olustur(&agac);

    int i;
    for(i=0;i<100;i++){
            ekle(agac,rand()%1000000);
    }



	printf( "Dugum Sayisi: %4d\n",dugum_sayisi(agac->kok) );
	printf( "Derinlik: %4d\n",derinlik(agac->kok) );


	preorder(agac);



	return 0;
}
