package com.raphaelcollin;

import java.util.ArrayDeque;
import java.util.Deque;
import java.util.LinkedList;
import java.util.List;

public class Main {
    private static Deque<Integer> subset = new ArrayDeque<>();

    public static void main(String[] args) {
        int[] array = {5, 2, 3, 4 };
        traverseSubsets(array, 0);
        System.out.println("===============");
        traverseSubsets2(array);
    }

    private static void traverseSubsets(int[] array, int k) {
        if (k == array.length) {
            System.out.println(subset);
        } else {
            traverseSubsets(array, k + 1);
            subset.push(array[k]);
            traverseSubsets(array, k + 1);
            subset.pop();
        }
    }

    private static void traverseSubsets2(int[] array) {
        for (int b = 0; b < (1 << array.length); b++) {
            List<Integer> subset = new LinkedList<>();
            for (int i = 0; i < array.length; i++) {
                if ((b & (1 << i)) != 0) {
                    subset.add(array[i]);
                }
            }

            System.out.println(subset);
        }
    }
}
