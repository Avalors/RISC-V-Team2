main:
  addi s1, zero, 0    #s1 = sum = 0
  addi s0, zero, 0    #s0 = i = 0
  addi t0, zero, 10   #t0 = 10
  
for: //looped 10 times
  bge s0, t0, done    #i>=10
  add s1, s1, s0      #sum = sum + i
  addi s0, s0, 1      #i = i + 1
  j for               #repeat loop

done: 
