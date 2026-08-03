def Binary_Search(sorted_list, search_item):
    low = 0
    high = len(sorted_list) - 1;
    while(low <= high):
        mid = (low + high) // 2;
        guess = sorted_list[mid];
        if(guess == search_item):
            return mid
        elif(guess < search_item):
            low = mid + 1
        else:
            high = mid - 1
    return None

sorted_list = [1,3,5,7,9]
search_item = 9
print(Binary_Search(sorted_list, search_item))  
