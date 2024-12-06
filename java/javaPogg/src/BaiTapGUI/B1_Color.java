/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package BaiTapGUI;

/**
 *
 * @author Admin
 */
import java.awt.BorderLayout;
import java.awt.Color;
import java.awt.HeadlessException;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.*;

class Paint extends JFrame implements ActionListener{
    private JButton bt;
    private JComboBox<String> list;
    public Paint(String title) throws HeadlessException {
        super(title);
        JPanel footer = new JPanel();
        this.bt = new JButton("OK");
        this.list = new JComboBox<>();
        list.addItem("Do");
        list.addItem("Xanh");
        list.addItem("Xanh La");
        footer.add(bt);
        footer.add(list);
        this.add(footer, BorderLayout.SOUTH);
        this.bt.addActionListener(this);
    }
    
    @Override
    public void actionPerformed(ActionEvent e) {
        String res = this.list.getSelectedItem().toString();
        if(res.equals("Do")) this.getContentPane().setBackground(Color.red);
        else if(res.equals("Xanh")) this.getContentPane().setBackground(Color.blue);
        else this.getContentPane().setBackground(Color.green);
    } 
}
public class B1_Color {
    public static void main(String[] args) {
        Paint frame = new Paint("Vẽ Hình");
        
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(400, 300);
        frame.setVisible(true);
    }
}
