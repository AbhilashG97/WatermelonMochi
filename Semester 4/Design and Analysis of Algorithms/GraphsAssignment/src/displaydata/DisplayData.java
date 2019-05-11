package displaydata;

import java.util.ArrayList;

import javax.swing.JFrame;
import javax.swing.JScrollPane;
import javax.swing.JTable;
import java.awt.*;

public class DisplayData <E> {

	private ArrayList<E> rowDataList;
	private JFrame jFrame;
	private JTable table;
	
	public DisplayData() {
		
	}
	
	public DisplayData(ArrayList<E> rowDataList) {
		this.rowDataList = rowDataList;
		initializeTable();
	}
	
	/**
	 * @return the jFrame
	 */
	public JFrame getjFrame() {
		return jFrame;
	}

	/**
	 * @param jFrame the jFrame to set
	 */
	public void setjFrame(JFrame jFrame) {
		this.jFrame = jFrame;
	}

	private void initializeTable() {

		jFrame = new JFrame();
		jFrame.getContentPane().setFont(new Font("Tahoma", Font.PLAIN, 13));
		jFrame.setBounds(300, 100, 500, 300);
		jFrame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		jFrame.getContentPane().setLayout(new CardLayout(0, 0));
		jFrame.setTitle("Topological Sorting of a DAG");
		{
			{	
				Object[][] rowData = {
						{rowDataList.get(1), "1"},
						{rowDataList.get(2), "2"},
						{rowDataList.get(3), "3"},
						{rowDataList.get(4), "4"},
						{rowDataList.get(5), "5"},
						{rowDataList.get(6), "6"},
						{rowDataList.get(7), "7"},
				};
				
				String[] columnNames = {"Vertex","Number"};
				table = new JTable(rowData, columnNames);
				JScrollPane scrollPane = new JScrollPane(table);
				scrollPane.setBounds(50, 50, 100, 100);
				jFrame.add(scrollPane);
				table.setFillsViewportHeight(true);
				table.setShowGrid(true);

			}
		}
	}
}