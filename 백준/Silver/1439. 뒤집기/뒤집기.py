s = input() 

st = [] 
zcnt =0 
ocnt = 0 
for e in s: 
   
    if not st:
        if e=='1':
            ocnt +=1 
        else:
            zcnt +=1 

    else:  # st: 
        if st[-1] ==e:
            continue 
        else: # st[-1] !=e: 
            if e =='1':
                ocnt +=1 
            else: 
                zcnt +=1 

    st.append(e) 
#print('zctn: ' ,zcnt ) 
#print('ocnt: ' , ocnt ) 

if (zcnt or ocnt) ==0:
    print(0) 

else: 
    ans = min( zcnt ,ocnt) 
    print(ans)

