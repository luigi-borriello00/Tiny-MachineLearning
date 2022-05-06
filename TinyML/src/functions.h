#include <stdio.h>
#include <stdlib.h>

// evaluate accuracy of the model
void evaluate_accuracy(int *y_pred, int *y_test, int test_size) {
    int correct = 0;
    for (int i = 0; i < test_size; i++) {
        if (y_pred[i] == y_test[i]) {
            correct++;
        }
    }
    printf("Accuracy: %f\n", (float) correct / test_size);
}

// evaluate precision of the model
void evaluate_precision(int *y_pred, int *y_test, int test_size) {
    int correct = 0;
    int correct_pos = 0;
    int correct_neg = 0;
    for (int i = 0; i < test_size; i++) {
        if (y_pred[i] == y_test[i]) {
            correct++;
            if (y_pred[i] == 1) {
                correct_pos++;
            } else {
                correct_neg++;
            }
        }
    }
    printf("Precision: %f\n", (float) correct_pos / (correct_pos + correct_neg));
}

// evaluate recall of the model
void evaluate_recall(int *y_pred, int *y_test, int test_size) {
    int correct = 0;
    int correct_pos = 0;
    int correct_neg = 0;
    for (int i = 0; i < test_size; i++) {
        if (y_pred[i] == y_test[i]) {
            correct++;
            if (y_pred[i] == 1) {
                correct_pos++;
            } else {
                correct_neg++;
            }
        }
    }
    printf("Recall: %f\n", (float) correct_pos / (correct_pos + correct_neg));
}

// evaluate f1 score of the model
void evaluate_f1(int *y_pred, int *y_test, int test_size) {
    int correct = 0;
    int correct_pos = 0;
    int correct_neg = 0;
    for (int i = 0; i < test_size; i++) {
        if (y_pred[i] == y_test[i]) {
            correct++;
            if (y_pred[i] == 1) {
                correct_pos++;
            } else {
                correct_neg++;
            }
        }
    }
    printf("F1 Score: %f\n", (2 * (float) correct_pos / (correct_pos + correct_neg)) / (1 + (float) correct_pos / (correct_pos + correct_neg)));
}