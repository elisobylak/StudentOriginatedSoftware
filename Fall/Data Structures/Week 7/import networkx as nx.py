import networkx as nx

G = nx.DiGraph()
for i in range(1,100):
	happy, tree = is_happy(i, [])

	# Skips happy numbers
	if happy:
		continue

	# Add the entire sequence to the tree
	for j in range(0,len(tree)-1):
		G.add_edge(tree[j], tree[j+1])

#import json
#from networkx.readwrite import json_graph
#
#for n in G:
#    G.node[n]['name'] = n
#
#d = json_graph.node_link_data(G)
#json.dump(d, open('force/force.json','w'))
