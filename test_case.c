#include <gtest/gtest.h>
#include "linked_list1.h"



TEST(statustest,normal) {
    char str[15]="List Start";
    char str1[10]="zero";
    char str2[10]="first";
    char str3[10]="second";
    char str4[10]="third";
    char str5[10]="fourth";
    char str6[10]="fifth";
    int i;

    linked_list head;
	linked_list *head1=NULL;

    head.next=0;
    head.data=str;
    head.index=0;


i=linkedlist_status(head1);

	 EXPECT_EQ(-1,i);
	    i=add_to_list(&head,str1);
		i=linkedlist_status(&head);
	EXPECT_EQ(1,i);

    add_to_list(&head,str2);
  	i=linkedlist_status(&head);
    EXPECT_EQ(2,i);

    add_to_list(&head,str3);
	i=linkedlist_status(&head);
    EXPECT_EQ(3,i);

    add_to_list(&head,str4);
	i=linkedlist_status(&head);
    EXPECT_EQ(4,i);

    add_to_list(&head,str5);
	i=linkedlist_status(&head);
    EXPECT_EQ(5,i);

    add_to_list(&head,str6);
	i=linkedlist_status(&head);
    EXPECT_EQ(6,i);
}

