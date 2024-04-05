import java.io.*;
import java.util.*;
import java.lang.*;

public class Main {
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String word = br.readLine();
        // 문자열 입력
        StringBuilder sb = new StringBuilder();
        // 결과 값을 출력할 StringBuilder

        boolean flag = false;
        // 꺽새 판별 flag

        Stack<Character>stack = new Stack < >();

        // 문자열 word의 길이만큼 반복
        for(int i = 0; i < word.length(); i++){
            if(word.charAt(i) == '<'){// 열린 꺽새를 만났을 경우
                while(!stack.isEmpty()) sb.append(stack.pop());
                // 스택에서 pop한 값을 결과값 출력에 append
                flag = true;
            }
            else if(word.charAt(i) == '>'){//닫힌 꺽새를 만났을 경우
                flag = false;
                sb.append(word.charAt(i));
                continue;
            }

            if(flag == true) sb.append(word.charAt(i));
            // flag가 true일 경우 '>' 를 만나기 전까지 그대로 입력
            else if(flag == false){
                if(word.charAt(i) == ' '){// 공백을 만났을 경우
                    while(!stack.isEmpty()) sb.append(stack.pop());
                    // 나머지 값을 모두 출력
                    sb.append(' ');
                    continue;
                    
                }
                else{
                    stack.push(word.charAt(i));
                }
            }
            // 스택이 마지막 횟수일 때 스택이 비어있지 않다면 원소 추가
            if(i == word.length() - 1){
                while(!stack.isEmpty()) sb.append(stack.pop());
            }
        }System.out.println(sb);  
    }
}