def twosumprob (my_arr, t_sum):
    for i in range(len(my_arr)-1):
        for j in range(i, len(my_arr)):
            if my_arr[i]+my_arr[j]==t_sum:
               return(my_arr[i]. my_arr[j])
    return[]
