#include<stdio.h>
void main ()
{
    int N, K;
    scanf("%d%d", &N, &K);

    int score[N+1];

    for(int i=1; i<=N; i++)
    {
        score[i] = 0;
    }
    int max_score=0, max_score_id=0;
    for (int i=0; i<K; i++)
    {
        int vote;
        scanf("%d", &vote);
        score[vote] += 1;
        if(score[vote] > max_score){
            max_score = score[vote];
            max_score_id = vote;
        }
    }

        printf("%d\n%d", max_score_id, max_score);
}

