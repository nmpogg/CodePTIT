/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

package BaiTapGUI;

/**
 *
 * @author Admin
 */
import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.File;
import javax.imageio.ImageIO;
import java.awt.image.BufferedImage;
import java.io.IOException;
import java.util.ArrayList;

public class B5_File extends JFrame {
    private JPanel imagePanel; // Panel chứa các ảnh
    private ArrayList<BufferedImage> images = new ArrayList<>(); // Danh sách chứa các ảnh

    public B5_File() {
        setTitle("Image Viewer");
        setSize(800, 600);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);

        // Tạo thanh công cụ để chọn ảnh
        JButton selectImageButton = new JButton("Select Images");
        selectImageButton.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {
                selectAndDisplayImages();
            }
        });

        // Panel hiển thị ảnh
        imagePanel = new JPanel();
        imagePanel.setLayout(new GridLayout(0, 3, 10, 10)); // Bố cục lưới để hiển thị nhiều ảnh
        JScrollPane scrollPane = new JScrollPane(imagePanel); // Cho phép cuộn để xem nhiều ảnh

        // Thêm các thành phần vào frame
        add(selectImageButton, BorderLayout.NORTH);
        add(scrollPane, BorderLayout.CENTER);
    }

    // Phương thức chọn và hiển thị ảnh
    private void selectAndDisplayImages() {
        JFileChooser fileChooser = new JFileChooser();
        fileChooser.setMultiSelectionEnabled(true); // Cho phép chọn nhiều ảnh
        fileChooser.setFileSelectionMode(JFileChooser.FILES_ONLY);

        int result = fileChooser.showOpenDialog(this);
        if (result == JFileChooser.APPROVE_OPTION) {
            File[] selectedFiles = fileChooser.getSelectedFiles();
            for (File file : selectedFiles) {
                try {
                    BufferedImage img = ImageIO.read(file);
                    images.add(img); // Thêm ảnh vào danh sách
                    displayImage(img); // Hiển thị ảnh
                } catch (IOException ex) {
                    ex.printStackTrace();
                    JOptionPane.showMessageDialog(this, "Could not open file: " + file.getName());
                }
            }
            imagePanel.revalidate(); // Cập nhật giao diện
        }
    }

    // Phương thức hiển thị ảnh
    private void displayImage(BufferedImage img) {
        Image scaledImage = img.getScaledInstance(200, 200, Image.SCALE_SMOOTH); // Thay đổi kích thước ảnh
        JLabel label = new JLabel(new ImageIcon(scaledImage)); // Hiển thị ảnh bằng JLabel
        imagePanel.add(label); // Thêm ảnh vào panel
    }

    public static void main(String[] args) {
        SwingUtilities.invokeLater(() -> {
            B5_File viewer = new B5_File();
            viewer.setVisible(true);
        });
    }
}
