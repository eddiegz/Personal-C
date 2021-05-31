on,op,an,ap,bn,bp,abn,abp=map(int,input().split())
pon,pop,pan,pap,pbn,pbp,pabn,pabp=map(int,input().split())

answer=0
left=0
if pon<=on:
    answer+=pon
    on-=pon
else:
    answer+=on
    on=0
if pop<=op+on:
    answer+=pop
    if pop>=op:
        on-=pop-op
        op=0
    else:
        op-=pop
else:
    answer+=op+on
    op,on=0,0
if pan<=an+on:
    answer+=pan
    if pan>=an:
        on-=pan-an
        an=0
    else:
        an-=pan
else:
    answer+=an+on
    an,on=0,0
if pap<=an+ap+on+op:
    answer+=pap
    if pap>=ap:
        if pap>=ap+an:
            if pap>=ap+an+op:
                on-=pap-ap-an-op
                ap,an,op=0,0,0
            else:
                op-=pap-ap-an
                ap,an=0,0
        else:
            an-=pap-ap
            ap=0
    else:
        ap-=pap
else:
    answer+=an+ap+on+op
    an,ap,on,op=0,0,0,0
if pbn<=bn+on:
    answer+=pbn
    if pbn>=bn:
        on-=pbn-bn
        bn=0
    else:
        bn-=pbn
else:
    answer+=bn+on
    bn,on=0,0
if pbp<=on+op+bn+bp:
    answer+=pbp
    if pbp>=bp:
        if pbp>=bp+bn:
            if pbp>=bp+bn+op:
                on-=pbp-bp-bn-op
                bp,bn,op=0,0,0
            else:
                op-=pbp-bp-bn
                bp,bn=0,0
        else:
            bn-=pbp-bp
            bp=0
    else:
        bp-=pbp
else:
    answer+=bn+bp+on+op
    on,op,bn,bp=0,0,0,0
if pabn<=an+on+bn+abn:
    answer+=pabn
else:
    answer+=an+on+bn+abn
    an,on,bn,abn=0,0,0,0
if pabp<=on+op+an+ap+bn+bp+abn+abp:
    answer+=pabp
else:
    answer+=on+op+an+ap+bn+bp+abn+abp
print(answer)
                    
        