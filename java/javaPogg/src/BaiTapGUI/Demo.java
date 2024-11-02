/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package BaiTapGUI;

import java.awt.*;
import javax.swing.*;

/**
 *
 * @author Admin
 */
public class Demo {
    public static void main(String[] args) {
        JFrame fr = new JFrame("Test");
        
        fr.add(new JButton("Enter"), BorderLayout.CENTER);
        
        JPanel p1 = new JPanel(new BorderLayout());
        p1.add(new JTextField("Time"), BorderLayout.NORTH);
        
        JPanel p2 = new JPanel();
        p2.setLayout(new GridLayout(4,3));
        
        for(int i = 1; i <= 9; i++){
            p2.add(new JButton(""+i));
        }
        
        p2.add(new JButton("0"));
        p2.add(new JButton("Start"));
        p2.add(new JButton("Stop"));
        
        p1.add(p2, BorderLayout.CENTER);
        fr.add(p1, BorderLayout.EAST);
        
        fr.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        fr.setSize(400, 300);
        fr.setVisible(true);
    }
}
